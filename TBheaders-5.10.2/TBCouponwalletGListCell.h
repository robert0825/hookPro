//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NSIndexPath, TBCouponwalletGListCellSubView, TBMyCouponViewController, UIView;

@interface TBCouponwalletGListCell : UICollectionViewCell
{
    TBMyCouponViewController *_viewController;	// 8 = 0x8
    NSIndexPath *_indexPath;	// 16 = 0x10
    TBCouponwalletGListCellSubView *_leftCell;	// 24 = 0x18
    TBCouponwalletGListCellSubView *_rightCell;	// 32 = 0x20
    UIView *_separateLine;	// 40 = 0x28
}

@property(retain, nonatomic) UIView *separateLine; // @synthesize separateLine=_separateLine;
@property(retain, nonatomic) TBCouponwalletGListCellSubView *rightCell; // @synthesize rightCell=_rightCell;
@property(retain, nonatomic) TBCouponwalletGListCellSubView *leftCell; // @synthesize leftCell=_leftCell;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(nonatomic) __weak TBMyCouponViewController *viewController; // @synthesize viewController=_viewController;
- (void).cxx_destruct;
- (void)clicked:(id)arg1;
- (void)configCell:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
