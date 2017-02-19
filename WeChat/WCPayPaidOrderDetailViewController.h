//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

#import "ILinkEventExt.h"
#import "IWCPayPaidOrderActivityMgrExt.h"

@class NSMutableArray, NSMutableDictionary, NSString, RichTextView, UIView;

@interface WCPayPaidOrderDetailViewController : WCPayBaseViewController <ILinkEventExt, IWCPayPaidOrderActivityMgrExt>
{
    id <WCPayPaidOrderDetailViewControllerDelegate> m_delegate;
    NSString *m_nsCompleteBtnTitle;
    NSString *m_nsCommondTip;
    NSMutableArray *m_arrActivityUrl;
    NSMutableDictionary *m_dicSubscribeSelectedStatus;
    _Bool m_bHandlePoped;
    UIView *m_bottomLogoView;
    RichTextView *richTextView;
    NSString *m_statLinkActivityName;
    _Bool m_bHadStatExpourse;
    _Bool m_bIsNativeRequestReward;
    int nativeRewardResult;
    NSString *nativeResultBtnText;
}

- (void).cxx_destruct;
- (void)OnRealnameVerifySuccessNotification:(id)arg1;
- (id)getOrderDetailByAwardId:(unsigned long long)arg1;
- (id)getActivityInfoByAwardId:(unsigned long long)arg1;
- (void)OnNativeActivityBtnClick:(id)arg1;
- (void)onPayPaidOrderActivityChanged;
- (id)getFavView;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)addBottomLogo;
- (void)showBizSafeTitle:(_Bool)arg1;
- (void)setCompleteBtnTitle:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)refreshViewWithData:(id)arg1;
- (void)reloadTableView;
- (void)OnActivityBtnDone:(id)arg1;
- (void)makeActivityCellInfo:(id)arg1 CellInfo:(id)arg2;
- (id)getFlowImageViewWithOrigin:(struct CGPoint)arg1;
- (void)makeSubscribeCellInfo:(id)arg1 CellInfo:(id)arg2;
- (id)getLinkActivityCell:(id)arg1;
- (void)makeLinkActivityCellInfo:(id)arg1 CellInfo:(id)arg2;
- (id)getOrderDetailView:(id)arg1;
- (id)getHeaderView;
- (id)getPaidSuccessView;
- (void)OnSelectedAppInfo:(id)arg1;
- (void)initNavigationBar;
- (void)OnNextStepBack;
- (void)OnHistoryOrderDetailBack;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)BackHistoryOrderDetail;
- (void)viewDidLayoutSubviews;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
