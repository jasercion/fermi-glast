"""
Description here

$Header: /glast/ScienceTools/glast/pointlike/python/uw/like2/analyze/Attic/fluxcorriso.py,v 1.1.2.1 2015/08/13 18:03:04 jasercio Exp $

"""

from . import fluxcorr

class FluxCorrIso(fluxcorr.FluxCorr):

    require = 'fluxcorriso.zip'
    def setup(self, **kw):
        super(FluxCorrIso,self).setup(source_name='fluxcorriso', **kw)
        self.title='Source-isotropic diffuse flux dependence'
        self.diffuse_name='Isotropic'
        
        self.plotfolder='fluxcorriso'