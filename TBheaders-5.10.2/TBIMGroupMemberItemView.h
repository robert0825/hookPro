//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAShapeLayer, UIButton, UILabel;
@protocol TBIMGroupMemberItemViewDelegate;

@interface TBIMGroupMemberItemView : UIView
{
    CAShapeLayer *_shapeLayer;	// 8 = 0x8
    _Bool _isEditing;	// 16 = 0x10
    UIButton *_headButton;	// 24 = 0x18
    UILabel *_memoLabel;	// 32 = 0x20
    UIButton *_headDeleteButton;	// 40 = 0x28
    id <TBIMGroupMemberItemViewDelegate> _delegate;	// 48 = 0x30
}

@property(nonatomic) __weak id <TBIMGroupMemberItemViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIButton *headDeleteButton; // @synthesize headDeleteButton=_headDeleteButton;
@property(retain, nonatomic) UILabel *memoLabel; // @synthesize memoLabel=_memoLabel;
@property(retain, nonatomic) UIButton *headButton; // @synthesize headButton=_headButton;
- (void).cxx_destruct;
- (void)deleteItemAction:(id)arg1;
- (void)clickHeadAction:(id)arg1;
- (void)setModel:(id)arg1;
- (void)setEditing:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
