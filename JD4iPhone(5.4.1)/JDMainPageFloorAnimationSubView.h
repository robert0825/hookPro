//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class JDImageView, NSString, UIActivityIndicatorView, UIImageView;

@interface JDMainPageFloorAnimationSubView : UIView
{
    UIImageView *_contentShowView;
    NSString *_markImageUrl;
    NSString *_winImageUrl;
    NSString *_loseImageUrl;
    JDImageView *_markView;
    JDImageView *_winView;
    JDImageView *_loseView;
    UIView *_itemView;
    long long _index;
    long long _state;
    UIActivityIndicatorView *_loadingView;
    struct CGRect _initialRect;
}

+ (id)animationSubViewWithItemView:(id)arg1 index:(long long)arg2;
@property(retain, nonatomic) UIActivityIndicatorView *loadingView; // @synthesize loadingView=_loadingView;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) struct CGRect initialRect; // @synthesize initialRect=_initialRect;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(nonatomic) __weak UIView *itemView; // @synthesize itemView=_itemView;
@property(retain, nonatomic) JDImageView *loseView; // @synthesize loseView=_loseView;
@property(retain, nonatomic) JDImageView *winView; // @synthesize winView=_winView;
@property(retain, nonatomic) JDImageView *markView; // @synthesize markView=_markView;
@property(copy, nonatomic) NSString *loseImageUrl; // @synthesize loseImageUrl=_loseImageUrl;
@property(copy, nonatomic) NSString *winImageUrl; // @synthesize winImageUrl=_winImageUrl;
@property(copy, nonatomic) NSString *markImageUrl; // @synthesize markImageUrl=_markImageUrl;
@property(retain, nonatomic) UIImageView *contentShowView; // @synthesize contentShowView=_contentShowView;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithItemView:(id)arg1 index:(long long)arg2;
- (id)getViewbyState:(long long)arg1;
- (id)imageFromView:(id)arg1;
- (void)getContentFromItemView;
- (void)hiddenLoadingView;
- (void)showLoadingView;

@end
