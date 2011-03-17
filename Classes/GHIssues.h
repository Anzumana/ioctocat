#import <Foundation/Foundation.h>
#import "GHResource.h"
#import "GHRepository.h"
#import "GHIssue.h"


@interface GHIssues : GHResource <GHResourceImplementation> {
	NSArray *entries;
  @private
    GHRepository *repository;
	NSString *issueState;
}

@property(nonatomic,retain)GHRepository *repository;
@property(nonatomic,retain)NSArray *entries;
@property(nonatomic,retain)NSString *issueState;

+ (id)issuesWithRepository:(GHRepository *)theRepository andState:(NSString *)theState;
- (id)initWithRepository:(GHRepository *)theRepository andState:(NSString *)theState;

@end
