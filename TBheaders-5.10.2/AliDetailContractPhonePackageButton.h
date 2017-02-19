//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AliDetailContractPhoneButton.h"

@class AliDetailContractPhonePackageButtonSeparatorView, AliDetailSkuContractPlan, UILabel;

@interface AliDetailContractPhonePackageButton : AliDetailContractPhoneButton
{
    AliDetailSkuContractPlan *_plan;	// 8 = 0x8
    UILabel *_priceLabel;	// 16 = 0x10
    AliDetailContractPhonePackageButtonSeparatorView *_separatorLine;	// 24 = 0x18
    UILabel *_descriptionLabel;	// 32 = 0x20
}

@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) AliDetailContractPhonePackageButtonSeparatorView *separatorLine; // @synthesize separatorLine=_separatorLine;
@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) AliDetailSkuContractPlan *plan; // @synthesize plan=_plan;
- (void).cxx_destruct;
- (void)setStatus:(long long)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setupSubViews;
- (id)formatPrice:(id)arg1;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;

@end
