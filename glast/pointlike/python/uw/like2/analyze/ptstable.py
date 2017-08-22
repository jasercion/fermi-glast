"""
Generate pulsar seed plots

$Header: /glast/ScienceTools/glast/pointlike/python/uw/like2/analyze/Attic/ptstable.py,v 1.1.2.1 2015/08/13 18:03:04 jasercio Exp $

"""

import glob
from astro.io import fits as pyfits
import pandas as pd

from uw.like2.pub import healpix_map
from uw.like2 import dataset
from uw.utilities import makepivot
from . import hptables

class PTStable(hptables.HPtables):
    require = 'hptables_pts.fits'
    def setup(self, **kw):
        fnames = glob.glob('hptables_pts*.fits')
        assert len(fnames)==1, 'expect one hptable_pts*.fits file'
        self.fname=fnames[0]
        self.tables = pd.DataFrame(pyfits.open(self.fname)[1].data)

        self.tsname = 'pts'
        self.plotfolder = 'pulsar_ts'
        self.seedfile, self.seedroot, self.title = 'pseeds.txt', 'PSEED' ,'pulsar'
        self.bmin=0 ##
        self.make_seeds(kw.pop('refresh', False))

    def all_plots(self):
        """ Results of Pulsar seed search """
        self.runfigures([ self.seed_plots, self.ts_map,])
