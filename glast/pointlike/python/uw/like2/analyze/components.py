"""
Description here

$Header: /glast/ScienceTools/glast/pointlike/python/uw/like2/analyze/Attic/components.py,v 1.1.2.1 2015/08/13 18:03:04 jasercio Exp $

"""

import numpy as np

from . import (roi_info, galactic, isotropic, limb, sunmoon, sourcetotal)

class Components(roi_info.ROIinfo):
    def setup(self):
        self.plotfolder='components'
        self.title = 'All components'
        self.plots_kw={}
        self.components = [x() for x in (galactic.Galactic, isotropic.Isotropic, limb.Limb, sunmoon.SunMoon, sourcetotal.SourceTotal)]
        self.funcs = np.hstack([x.funcs for x in self.components])
        self.fnames= np.hstack([x.fnames for x in self.components])