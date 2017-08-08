"""
Description here

$Header: /glast/ScienceTools/glast/pointlike/python/uw/like2/analyze/Attic/pgwseedcheck.py,v 1.1.2.1 2015/08/13 18:03:04 jasercio Exp $

"""

from . import seedcheck

class PGWSeedCheck(seedcheck.SeedCheck):
    require='seedcheck_PGW.zip'
    def setup(self, **kw):
        self.plotfolder = self.seedname= 'seedcheck_PGW'
        self.spectral_type = 'power law'
        self.load()