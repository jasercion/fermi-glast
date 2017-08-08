"""
Configuration information

$Header: /glast/ScienceTools/glast/pointlike/python/uw/like2/analyze/Attic/config.py,v 1.1.2.1 2015/08/13 18:03:04 jasercio Exp $

"""

import os
import numpy as np
import pylab as plt
import pandas as pd

from . import analysis_base, _html


class Configuration(analysis_base.AnalysisBase):
    """Configuration information
    """

    def setup(self,**kw):
        self.plotfolder='config'
        
    def make_config(self):
        """Summary log files from the processing of this model
        %(html)s
        """
        self.html =''
        for filename in ('config.txt', '../config.txt', 'dataset.txt', 'converge.txt', 'summary_log.txt'):
            if not os.path.exists(filename): continue
            self.html += '<h4>%s</h4>\n<pre>%s</pre>' % (filename, open(filename).read())
        return None

    def all_plots(self):
        self.runfigures([self.make_config,])
