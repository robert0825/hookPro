//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDViewController.h"

#import "JDWebViewDelegate.h"
#import "UIScrollViewDelegate.h"

@class JDWebView, JDWebViewProgressView, NSDictionary, NSString;

@interface JDWebViewController : JDViewController <JDWebViewDelegate, UIScrollViewDelegate>
{
    JDWebView *_webView;
    _Bool _usingUIWebView;
    JDWebViewProgressView *_progressView;
    NSString *_url;
    NSString *_html;
    id <JDWebViewControllerDeletage> _webViewControllerDeletageProxy;
    id <JDWebViewDelegate> _webViewDeletageProxy;
    id <UIScrollViewDelegate> _scrollViewDeletageProxy;
    id <JDWebViewControllerShareInfoDelegate> _shareInfoDelegateProxy;
    CDUnknownBlockType _leftBarButtonItemBlock;
    CDUnknownBlockType _rightBarButtonItemBlock;
    NSString *_customTitle;
    NSDictionary *_property;
}

@property(copy, nonatomic) NSDictionary *property; // @synthesize property=_property;
@property(copy, nonatomic) NSString *customTitle; // @synthesize customTitle=_customTitle;
@property(copy, nonatomic) CDUnknownBlockType rightBarButtonItemBlock; // @synthesize rightBarButtonItemBlock=_rightBarButtonItemBlock;
@property(copy, nonatomic) CDUnknownBlockType leftBarButtonItemBlock; // @synthesize leftBarButtonItemBlock=_leftBarButtonItemBlock;
@property(retain, nonatomic) id <JDWebViewControllerShareInfoDelegate> shareInfoDelegateProxy; // @synthesize shareInfoDelegateProxy=_shareInfoDelegateProxy;
@property(retain, nonatomic) id <UIScrollViewDelegate> scrollViewDeletageProxy; // @synthesize scrollViewDeletageProxy=_scrollViewDeletageProxy;
@property(retain, nonatomic) id <JDWebViewDelegate> webViewDeletageProxy; // @synthesize webViewDeletageProxy=_webViewDeletageProxy;
@property(retain, nonatomic) id <JDWebViewControllerDeletage> webViewControllerDeletageProxy; // @synthesize webViewControllerDeletageProxy=_webViewControllerDeletageProxy;
@property(readonly, nonatomic) JDWebView *webView; // @synthesize webView=_webView;
- (void).cxx_destruct;
- (void)refreshRightBarButtonItem;
- (void)refreshLeftBarButtonItem;
- (void)refreshBarButtonItem;
- (void)scrollViewDidScroll:(id)arg1;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)exit;
- (void)backButtonClicked;
- (void)showBackAndCloseButton;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(readonly, copy, nonatomic) NSString *entryURL;
- (void)reload;
- (void)loadHTMLString:(id)arg1;
- (void)loadURL:(id)arg1;
- (void)injectJSCode:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithHTMLString:(id)arg1 usingUIWebView:(_Bool)arg2;
- (id)initWithHTMLString:(id)arg1;
- (id)initWithURL:(id)arg1 usingUIWebView:(_Bool)arg2;
- (id)initWithURL:(id)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
