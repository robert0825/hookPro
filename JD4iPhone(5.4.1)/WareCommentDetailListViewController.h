//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDViewController.h"

#import "NewRefreshTableHeaderViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UIViewControllerPreviewingDelegate.h"
#import "WareCommentDetailDelegate.h"
#import "WareCommentImageListDelegate.h"
#import "WareCommentPictureCellDelegate.h"
#import "WareCommentPictureDetailDelegate.h"
#import "WareCommentSegmentedViewDelegate.h"
#import "WareCommentVideoDelegate.h"

@class CommentVideoInfoModel, JDButton, JDStoreNetwork, NSMutableArray, NSString, NewRefreshTableHeaderView, UITableView, UIView, WareCommentPictureDetailViewController, WareCommentSegmentView, WarecommentTagView;

@interface WareCommentDetailListViewController : JDViewController <UITableViewDelegate, UITableViewDataSource, WareCommentSegmentedViewDelegate, NewRefreshTableHeaderViewDelegate, WareCommentPictureCellDelegate, WareCommentPictureDetailDelegate, UIViewControllerPreviewingDelegate, WareCommentImageListDelegate, WareCommentVideoDelegate, WareCommentDetailDelegate>
{
    WareCommentSegmentView *segmentedView_;
    JDStoreNetwork *networkDao_;
    int type_;
    UIView *barView;
    long long totalCntforAll;
    long long totalCntforBad;
    long long totalCntforMedium;
    long long totalCntforGood;
    long long totalCntforShaidan;
    JDButton *backToTopButton;
    UIView *reloadView;
    UIView *noDataView;
    WarecommentTagView *tagsView;
    _Bool donotRecordPV;
    long long selectedIndex;
    _Bool isGetMoreforAll;
    _Bool isGetMoreforBad;
    _Bool isGetMoreforGood;
    _Bool isGetMoreforMedium;
    _Bool isGetMoreforShaidan;
    _Bool isLoadingforAll;
    _Bool isLoadingforBad;
    _Bool isLoadingforMedium;
    _Bool isLoadingforGood;
    _Bool isLoadingforShaidan;
    _Bool _isSingleView;
    _Bool _isVideoLoading;
    int currentPageforAll;
    int currentPageforBad;
    int currentPageforGood;
    int currentPageforMedium;
    int currentPageforShaidan;
    NSString *_wareId;
    double _barHeight;
    NSString *_videoUrl;
    NSMutableArray *_itemsofALL;
    NSMutableArray *_itemsofBad;
    NSMutableArray *_itemsofMedium;
    NSMutableArray *_itemsofGood;
    NSMutableArray *_itemsofShaidan;
    NewRefreshTableHeaderView *_refreshHeaderView;
    UIView *_footerView;
    UITableView *_tableViewforAll;
    UITableView *_tableViewforBad;
    UITableView *_tableViewforMedium;
    UITableView *_tableViewforGood;
    UITableView *_tableViewforShaidan;
    CommentVideoInfoModel *_videoModel;
    WareCommentPictureDetailViewController *_pictureDetailViewController;
}

@property(retain, nonatomic) WareCommentPictureDetailViewController *pictureDetailViewController; // @synthesize pictureDetailViewController=_pictureDetailViewController;
@property(retain, nonatomic) CommentVideoInfoModel *videoModel; // @synthesize videoModel=_videoModel;
@property(retain, nonatomic) UITableView *tableViewforShaidan; // @synthesize tableViewforShaidan=_tableViewforShaidan;
@property(retain, nonatomic) UITableView *tableViewforGood; // @synthesize tableViewforGood=_tableViewforGood;
@property(retain, nonatomic) UITableView *tableViewforMedium; // @synthesize tableViewforMedium=_tableViewforMedium;
@property(retain, nonatomic) UITableView *tableViewforBad; // @synthesize tableViewforBad=_tableViewforBad;
@property(retain, nonatomic) UITableView *tableViewforAll; // @synthesize tableViewforAll=_tableViewforAll;
@property(nonatomic) _Bool isVideoLoading; // @synthesize isVideoLoading=_isVideoLoading;
@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) NewRefreshTableHeaderView *refreshHeaderView; // @synthesize refreshHeaderView=_refreshHeaderView;
@property(retain, nonatomic) NSMutableArray *itemsofShaidan; // @synthesize itemsofShaidan=_itemsofShaidan;
@property(retain, nonatomic) NSMutableArray *itemsofGood; // @synthesize itemsofGood=_itemsofGood;
@property(retain, nonatomic) NSMutableArray *itemsofMedium; // @synthesize itemsofMedium=_itemsofMedium;
@property(retain, nonatomic) NSMutableArray *itemsofBad; // @synthesize itemsofBad=_itemsofBad;
@property(retain, nonatomic) NSMutableArray *itemsofALL; // @synthesize itemsofALL=_itemsofALL;
@property(copy, nonatomic) NSString *videoUrl; // @synthesize videoUrl=_videoUrl;
@property(nonatomic) _Bool isSingleView; // @synthesize isSingleView=_isSingleView;
@property(nonatomic) double barHeight; // @synthesize barHeight=_barHeight;
@property(copy, nonatomic) NSString *wareId; // @synthesize wareId=_wareId;
@property(nonatomic) _Bool isLoadingforShaidan; // @synthesize isLoadingforShaidan;
@property(nonatomic) _Bool isLoadingforGood; // @synthesize isLoadingforGood;
@property(nonatomic) _Bool isLoadingforMedium; // @synthesize isLoadingforMedium;
@property(nonatomic) _Bool isLoadingforBad; // @synthesize isLoadingforBad;
@property(nonatomic) _Bool isLoadingforAll; // @synthesize isLoadingforAll;
@property(nonatomic) int currentPageforShaidan; // @synthesize currentPageforShaidan;
@property(nonatomic) int currentPageforMedium; // @synthesize currentPageforMedium;
@property(nonatomic) int currentPageforGood; // @synthesize currentPageforGood;
@property(nonatomic) int currentPageforBad; // @synthesize currentPageforBad;
@property(nonatomic) int currentPageforAll; // @synthesize currentPageforAll;
@property(nonatomic) _Bool isGetMoreforShaidan; // @synthesize isGetMoreforShaidan;
@property(nonatomic) _Bool isGetMoreforMedium; // @synthesize isGetMoreforMedium;
@property(nonatomic) _Bool isGetMoreforGood; // @synthesize isGetMoreforGood;
@property(nonatomic) _Bool isGetMoreforBad; // @synthesize isGetMoreforBad;
@property(nonatomic) _Bool isGetMoreforAll; // @synthesize isGetMoreforAll;
@property(nonatomic) int type; // @synthesize type=type_;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (id)getPreViewController:(struct CGPoint)arg1 context:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;
- (void)requestVideoUrlBlock:(CDUnknownBlockType)arg1;
- (void)getVideoData:(_Bool)arg1 fromVideo:(_Bool)arg2;
- (void)playVideo;
- (void)openVideoPlayer;
- (void)returnTopButton:(id)arg1;
- (void)showWareCommentAblum;
- (void)gotoBigImageListWidthIndex:(long long)arg1 warecommentMode:(id)arg2;
- (void)scrollWareCommentToEnd:(_Bool)arg1;
- (void)setWareCommentPictureDetailPage:(int)arg1 isgetMore:(_Bool)arg2;
- (void)didSelectWareCommentPictureIndex:(long long)arg1 commentId:(id)arg2;
- (void)reloadCommentCount:(id)arg1;
- (void)addTagsView:(id)arg1;
- (void)removeNoDataView;
- (void)showNoDataView;
- (void)removeReloadView;
- (void)showReloadView;
- (void)didFinishResponseWithRequestSetup:(id)arg1 components:(id)arg2 msg:(id)arg3 type:(int)arg4;
- (void)reconnect;
- (void)finishLoading;
- (void)refreshLoading;
- (void)reloadData;
- (void)refreshData;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)segmentedView:(id)arg1 didSelectIndex:(long long)arg2;
- (void)requestClickUsefulWithParams:(id)arg1 responseBlock:(CDUnknownBlockType)arg2;
- (void)reloadWithData:(id)arg1 key:(id)arg2 type:(int)arg3;
- (void)getPicturesData:(int)arg1;
- (void)fetchDataWithType:(int)arg1;
- (void)resetData;
- (void)getDataWithWareId:(id)arg1 type:(long long)arg2;
- (void)getDataWithWareId:(id)arg1;
- (id)getTableView;
- (void)setupUI;
- (void)setRecordPVValue:(id)arg1;
- (void)refreshButton:(id)arg1;
- (void)applicationBackgroud:(id)arg1;
- (void)leaveThePage;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)traitCollectionDidChange:(id)arg1;
- (void)backToThePage;
- (void)viewWillAppear:(_Bool)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

