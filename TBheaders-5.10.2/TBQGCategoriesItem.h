//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString;

@interface TBQGCategoriesItem : TBJSONModel
{
    NSString *_categoryId;	// 8 = 0x8
    NSString *_childName;	// 16 = 0x10
    NSString *_childId;	// 24 = 0x18
    NSString *_name;	// 32 = 0x20
}

+ (id)modelKeyMapper;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *childId; // @synthesize childId=_childId;
@property(retain, nonatomic) NSString *childName; // @synthesize childName=_childName;
@property(retain, nonatomic) NSString *categoryId; // @synthesize categoryId=_categoryId;
- (void).cxx_destruct;

@end
