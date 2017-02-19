//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TMSearchResponseUpdations-Protocol.h"
#import "TMSearchResultsVMProtocol-Protocol.h"

@class FindSimilarModel, MarketShoppingCartAddRequest, NSString, TMItemSearchFilter, TMSearchItemsContainer, TMSearchPageLoader;
@protocol FindSimilarViewModelDelegate;

@interface FindSimilarViewModel : NSObject <TMSearchResultsVMProtocol, TMSearchResponseUpdations>
{
    MarketShoppingCartAddRequest *_request;	// 8 = 0x8
    TMSearchPageLoader *_pageLoader;	// 16 = 0x10
    TMItemSearchFilter *_filter;	// 24 = 0x18
    id <FindSimilarViewModelDelegate> _vmDelegate;	// 32 = 0x20
    FindSimilarModel *_model;	// 40 = 0x28
}

@property(readonly, nonatomic) FindSimilarModel *model; // @synthesize model=_model;
@property(nonatomic) __weak id <FindSimilarViewModelDelegate> vmDelegate; // @synthesize vmDelegate=_vmDelegate;
@property(readonly, nonatomic) TMItemSearchFilter *filter; // @synthesize filter=_filter;
@property(readonly, nonatomic) TMSearchPageLoader *pageLoader; // @synthesize pageLoader=_pageLoader;
- (void).cxx_destruct;
- (void)requestFailedWithError:(id)arg1 forRequest:(id)arg2;
- (void)requestSuccessWithResponse:(id)arg1 forRequest:(id)arg2;
- (void)cancelRequest;
- (void)sendRequest;
- (void)doUserTrackForResponseFinished;
- (void)doUserTrackForRequestBegin;
- (void)sortParameterChange:(id)arg1;
- (void)searchWithItemId:(id)arg1;
- (void)configPageLoader;
- (id)initWithFilterModel:(id)arg1;
@property(readonly, nonatomic) TMSearchItemsContainer *itemsContainer;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
