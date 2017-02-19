//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBLiveTableViewCell.h"

@class TBLiveAppointmentCellViewModel, TBLiveAppointmentLargeContentView, TBLiveAppointmentLargeHeaderView;

@interface TBLiveAppointmentLargeCell : TBLiveTableViewCell
{
    TBLiveAppointmentLargeHeaderView *_headerView;	// 8 = 0x8
    TBLiveAppointmentLargeContentView *_cellContentView;	// 16 = 0x10
    TBLiveAppointmentCellViewModel *_viewModel;	// 24 = 0x18
}

+ (struct CGSize)viewSize;
@property(retain, nonatomic) TBLiveAppointmentCellViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) TBLiveAppointmentLargeContentView *cellContentView; // @synthesize cellContentView=_cellContentView;
@property(retain, nonatomic) TBLiveAppointmentLargeHeaderView *headerView; // @synthesize headerView=_headerView;
- (void).cxx_destruct;
- (void)onTapAppointment:(id)arg1;
- (void)refreshWithViewModel:(id)arg1;
- (void)updateLayoutConstraints;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
