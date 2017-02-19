//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

#import "TBSNSBasicServiceDelegate-Protocol.h"
#import "TBSNSWeDetailChildWebViewControllerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class NSArray, NSLock, NSMutableDictionary, NSString, NSURL, TBIconFontButton, TBSNSActionBarView, TBSNSWeDetailBaseItem, TBSNSWeDetailBaseService, TBSNSWeDetailChildWebViewController, TBSNSWeDetailCommentTableView, TBSNSWeDetailDataLoader, TBSNSWeDetailHeadView, UIView;

@interface TBSNSWeDetailBaseScrollView : UIScrollView <TBSNSWeDetailChildWebViewControllerDelegate, UIScrollViewDelegate, TBSNSBasicServiceDelegate>
{
    _Bool _noComment;	// 8 = 0x8
    _Bool _commentIsShow;	// 9 = 0x9
    _Bool _checkComment;	// 10 = 0xa
    _Bool _isLoadData;	// 11 = 0xb
    _Bool _isFirstInit;	// 12 = 0xc
    _Bool _isDegrade;	// 13 = 0xd
    _Bool _isCache;	// 14 = 0xe
    _Bool _needPassParams;	// 15 = 0xf
    _Bool _shouldPushTableViewToTop;	// 16 = 0x10
    _Bool _hasGotoCommentArea;	// 17 = 0x11
    _Bool _shouldOpenCommentArea;	// 18 = 0x12
    NSMutableDictionary *_queryParams;	// 24 = 0x18
    NSURL *_URL;	// 32 = 0x20
    TBSNSWeDetailHeadView *_baseHeadView;	// 40 = 0x28
    TBSNSActionBarView *_actionBar;	// 48 = 0x30
    TBSNSWeDetailCommentTableView *_tableView;	// 56 = 0x38
    TBSNSWeDetailBaseItem *_baseItem;	// 64 = 0x40
    TBSNSWeDetailBaseService *_baseService;	// 72 = 0x48
    TBSNSWeDetailChildWebViewController *_webViewController;	// 80 = 0x50
    TBSNSWeDetailDataLoader *_dataLoader;	// 88 = 0x58
    TBIconFontButton *_titleBtn;	// 96 = 0x60
    UIView *_webViewshadowUPLine;	// 104 = 0x68
    UIView *_webViewshadowDownLine;	// 112 = 0x70
    UIView *_lineDown;	// 120 = 0x78
    unsigned long long _feedId;	// 128 = 0x80
    unsigned long long _accountId;	// 136 = 0x88
    NSString *_shareUrl;	// 144 = 0x90
    NSString *_shareTitle;	// 152 = 0x98
    NSString *_shareCover;	// 160 = 0xa0
    NSArray *_feedTypeAry;	// 168 = 0xa8
    NSLock *_lock;	// 176 = 0xb0
    UIView *_textView;	// 184 = 0xb8
}

@property(nonatomic) _Bool shouldOpenCommentArea; // @synthesize shouldOpenCommentArea=_shouldOpenCommentArea;
@property(nonatomic) _Bool hasGotoCommentArea; // @synthesize hasGotoCommentArea=_hasGotoCommentArea;
@property(nonatomic) _Bool shouldPushTableViewToTop; // @synthesize shouldPushTableViewToTop=_shouldPushTableViewToTop;
@property(nonatomic) _Bool needPassParams; // @synthesize needPassParams=_needPassParams;
@property(nonatomic) _Bool isCache; // @synthesize isCache=_isCache;
@property(retain, nonatomic) UIView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) NSLock *lock; // @synthesize lock=_lock;
@property(nonatomic) _Bool isDegrade; // @synthesize isDegrade=_isDegrade;
@property(nonatomic) _Bool isFirstInit; // @synthesize isFirstInit=_isFirstInit;
@property(nonatomic) _Bool isLoadData; // @synthesize isLoadData=_isLoadData;
@property(nonatomic) _Bool checkComment; // @synthesize checkComment=_checkComment;
@property(nonatomic) _Bool commentIsShow; // @synthesize commentIsShow=_commentIsShow;
@property(nonatomic) _Bool noComment; // @synthesize noComment=_noComment;
@property(retain, nonatomic) NSArray *feedTypeAry; // @synthesize feedTypeAry=_feedTypeAry;
@property(copy, nonatomic) NSString *shareCover; // @synthesize shareCover=_shareCover;
@property(copy, nonatomic) NSString *shareTitle; // @synthesize shareTitle=_shareTitle;
@property(copy, nonatomic) NSString *shareUrl; // @synthesize shareUrl=_shareUrl;
@property(nonatomic) unsigned long long accountId; // @synthesize accountId=_accountId;
@property(nonatomic) unsigned long long feedId; // @synthesize feedId=_feedId;
@property(retain, nonatomic) UIView *lineDown; // @synthesize lineDown=_lineDown;
@property(retain, nonatomic) UIView *webViewshadowDownLine; // @synthesize webViewshadowDownLine=_webViewshadowDownLine;
@property(retain, nonatomic) UIView *webViewshadowUPLine; // @synthesize webViewshadowUPLine=_webViewshadowUPLine;
@property(retain, nonatomic) TBIconFontButton *titleBtn; // @synthesize titleBtn=_titleBtn;
@property(retain, nonatomic) TBSNSWeDetailDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
@property(retain, nonatomic) TBSNSWeDetailChildWebViewController *webViewController; // @synthesize webViewController=_webViewController;
@property(retain, nonatomic) TBSNSWeDetailBaseService *baseService; // @synthesize baseService=_baseService;
@property(retain, nonatomic) TBSNSWeDetailBaseItem *baseItem; // @synthesize baseItem=_baseItem;
@property(retain, nonatomic) TBSNSWeDetailCommentTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) TBSNSActionBarView *actionBar; // @synthesize actionBar=_actionBar;
@property(retain, nonatomic) TBSNSWeDetailHeadView *baseHeadView; // @synthesize baseHeadView=_baseHeadView;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(retain, nonatomic) NSMutableDictionary *queryParams; // @synthesize queryParams=_queryParams;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)arg1;
- (void)childWebViewController:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)childWebViewControllerDidFinishLoad:(id)arg1;
- (void)moveTableView;
- (void)commentClicked;
- (void)commentClickedWithAnimationTime:(double)arg1;
- (void)sendComment;
- (void)removeCommentWithAnimateDuring:(double)arg1;
- (void)removeCommentWithAnimate;
- (void)showCommentWithAnimateDuring:(double)arg1;
- (void)showCommentWithAnimate;
- (void)updateNextPageUTByItem:(id)arg1;
- (void)handleViewDidAppear;
- (id)safeStringOf:(id)arg1;
- (void)dealWithSpotlight:(id)arg1;
- (void)setBaseVar:(id)arg1;
- (void)dealloc;
- (void)loadCommentWithComplete:(CDUnknownBlockType)arg1;
- (void)loadWebViewRequest;
- (void)updateViewData;
- (void)updateActionBar:(id)arg1;
- (void)jumpToShop;
- (void)updateNavBar;
- (void)updateTmpComment:(id)arg1;
- (void)loadComment;
- (void)setUpView;
- (void)letWebViewGoBack;
- (_Bool)webViewCanGoback;
- (_Bool)isFeedTypeDegrade;
- (void)readDataFromConfigCenter;
- (void)loadBaseItemDataWithFeedId:(unsigned long long)arg1 sellerId:(unsigned long long)arg2 type:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1 baseItem:(id)arg2 goToComment:(_Bool)arg3 openCommentArea:(_Bool)arg4;
- (id)initWithFrame:(struct CGRect)arg1 baseItem:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 feedId:(unsigned long long)arg2 sellerId:(unsigned long long)arg3 type:(id)arg4 goToComment:(_Bool)arg5 openCommentArea:(_Bool)arg6;
- (id)initWithFrame:(struct CGRect)arg1 feedId:(unsigned long long)arg2 sellerId:(unsigned long long)arg3 type:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
