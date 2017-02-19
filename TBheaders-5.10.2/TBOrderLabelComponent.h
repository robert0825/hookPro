//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBOrderComponent.h"

@class NSMutableArray, NSMutableAttributedString;

@interface TBOrderLabelComponent : TBOrderComponent
{
    NSMutableArray *_values;	// 8 = 0x8
    NSMutableAttributedString *_richTextTitle;	// 16 = 0x10
    NSMutableAttributedString *_richTextDesc;	// 24 = 0x18
}

@property(retain, nonatomic) NSMutableAttributedString *richTextDesc; // @synthesize richTextDesc=_richTextDesc;
@property(retain, nonatomic) NSMutableAttributedString *richTextTitle; // @synthesize richTextTitle=_richTextTitle;
@property(retain, nonatomic) NSMutableArray *values; // @synthesize values=_values;
- (void).cxx_destruct;
- (id)richTexts;
- (_Bool)isHighLight;
- (_Bool)isAlignJustify;
- (id)url;
- (_Bool)showArrow;
- (_Bool)triggerEvent;
- (id)icon;
- (id)desc;
- (id)title;
- (id)initWithData:(id)arg1;

@end
