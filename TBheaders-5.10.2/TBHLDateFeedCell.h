//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBHLBaseFeedCell.h"

@class UILabel;

@interface TBHLDateFeedCell : TBHLBaseFeedCell
{
    UILabel *_dayLabel;	// 8 = 0x8
    UILabel *_descLabel;	// 16 = 0x10
}

@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *dayLabel; // @synthesize dayLabel=_dayLabel;
- (void).cxx_destruct;
- (void)cellClick;
- (void)configHLCell:(id)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)awakeFromNib;

@end
