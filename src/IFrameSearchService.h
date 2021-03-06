#ifndef __IFRAMESEARCHSERVICE_H__
#define __IFRAMESEARCHSERVICE_H__

#include "IEditorSearch.h"

class IFrameSearchService {
public:
	virtual IEditorSearch* GetSearch() = 0;
	virtual void ShowSearch(bool show=true, bool replace=false) = 0;
};


#endif // __IFRAMESEARCHSERVICE_H__
