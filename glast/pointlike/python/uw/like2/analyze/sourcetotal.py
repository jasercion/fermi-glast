"""
Description here

$Header: /glast/ScienceTools/glast/pointlike/python/uw/like2/analyze/Attic/sourcetotal.py,v 1.1.2.1 2015/08/13 18:03:04 jasercio Exp $

"""

from . import roi_info

class SourceTotal(roi_info.ROIinfo):
    def setup(self, **kw):
        super(SourceTotal, self).setup(**kw)
        self.plotfolder='sourcetotal'
        self.source_name='sources'
        self.title='Sources'
        self.funcs = [self.counts_map]
        self.fnames=['source_counts']

    def all_plots(self, **kwargs):
        """ Counts for all sources, per RIO"""
    
        self.runfigures([self.counts_map], ['source_counts'], **kwargs)
