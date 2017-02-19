//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class JDImageView, UILabel, UIView, ZDMPostViewModel;

@interface ZDMRelatedPostCollectionViewCell : UICollectionViewCell
{
    JDImageView *_productImageView;
    UIView *_numberOfLikesView;
    UILabel *_numberOfLikesLabel;
    ZDMPostViewModel *_relatedPostViewModel;
}

@property(retain, nonatomic) ZDMPostViewModel *relatedPostViewModel; // @synthesize relatedPostViewModel=_relatedPostViewModel;
@property(retain, nonatomic) UILabel *numberOfLikesLabel; // @synthesize numberOfLikesLabel=_numberOfLikesLabel;
@property(retain, nonatomic) UIView *numberOfLikesView; // @synthesize numberOfLikesView=_numberOfLikesView;
@property(retain, nonatomic) JDImageView *productImageView; // @synthesize productImageView=_productImageView;
- (void).cxx_destruct;
- (void)awakeFromNib;

@end
