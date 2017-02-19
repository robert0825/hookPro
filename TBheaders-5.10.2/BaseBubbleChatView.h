//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "BaseBubbleChatViewInf-Protocol.h"

@class BaseBubbleViewModel, NSString, UIImageView;

@interface BaseBubbleChatView : UIView <BaseBubbleChatViewInf>
{
    _Bool _highLight;	// 8 = 0x8
    _Bool _forceLayout;	// 9 = 0x9
    int _bubbleStyle;	// 12 = 0xc
    UIImageView *_imageViewBk;	// 16 = 0x10
    CDUnknownBlockType _ask4LayoutBlock;	// 24 = 0x18
    BaseBubbleViewModel *_viewModel;	// 32 = 0x20
    CDUnknownBlockType _openUrlBlock;	// 40 = 0x28
    double _contentMaxWith;	// 48 = 0x30
}

+ (_Bool)shouldBePlacedLeftSide:(int)arg1;
+ (_Bool)shouldBePlacedCentrally:(int)arg1;
+ (id)shareMsgSimplicityCover;
+ (id)shareMsgSimplicity;
+ (id)shareImageTBItemStyleHL;
+ (id)shareImageTBItemStyle;
+ (id)shareImageFlatHLMid;
+ (id)shareImageFlatMid;
+ (id)shareImageFlatHLRight;
+ (id)shareImageFlatRight;
+ (id)shareImageHLFlatLeft;
+ (id)shareImageFlatLeft;
+ (id)shareMsgFilletPanel;
+ (id)shareMsgCoverRightHightlight;
+ (id)shareMsgCoverRight;
+ (id)shareMsgCoverLeftHightlight;
+ (id)shareMsgCoverLeft;
+ (id)shareMsgSystemBk;
+ (id)shareMsgRightRecordingBk;
+ (id)shareMsgRightNormalBk;
+ (id)shareMsgLeftRecordingBk;
+ (id)shareMsgLeftNormalBk;
@property(nonatomic) double contentMaxWith; // @synthesize contentMaxWith=_contentMaxWith;
@property(copy, nonatomic) CDUnknownBlockType openUrlBlock; // @synthesize openUrlBlock=_openUrlBlock;
@property(retain, nonatomic) BaseBubbleViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) _Bool forceLayout; // @synthesize forceLayout=_forceLayout;
@property(copy, nonatomic) CDUnknownBlockType ask4LayoutBlock; // @synthesize ask4LayoutBlock=_ask4LayoutBlock;
@property(nonatomic) _Bool highLight; // @synthesize highLight=_highLight;
@property(nonatomic) int bubbleStyle; // @synthesize bubbleStyle=_bubbleStyle;
@property(retain, nonatomic) UIImageView *imageViewBk; // @synthesize imageViewBk=_imageViewBk;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)viewModelClassName;
- (struct CGSize)getBubbleViewSize;
- (void)updateBubbleView;
- (_Bool)shouldBePlacedLeftSide;
- (_Bool)shouldBePlacedCentrally;
- (_Bool)shouldBeBring2Front;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
