#include "CriteriaButtonManager.h"
#include <string>
#include <Math/UnrealMathUtility.h>

// Sets default values for this component's properties
UCriteriaButtonManager::UCriteriaButtonManager()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	FString price = FString::SanitizeFloat(RandomPrice(0.05, 10));

	criterion.Add("Fruit");
	criterion.Add("Not Fruit");
	criterion.Add("<" + price);
	criterion.Add("=" + price);
	criterion.Add(">" + price);
	criterion.Add("Not Red");
	criterion.Add("Not Yellow");
	criterion.Add("Not Green");
	criterion.Add("Not Drink");
	criterion.Add("Red");
	criterion.Add("Yellow");
	criterion.Add("Green");
	criterion.Add("Drink");
	criterion.Add("Not Single");
	criterion.Add("Single");
}

// Called when the game starts
void UCriteriaButtonManager::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}

// Called every frame
void UCriteriaButtonManager::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

float UCriteriaButtonManager::RandomPrice(float min, float max)
{	
	float randomNumber = FMath::RandRange(min, max);

	return randomNumber;
}

FString UCriteriaButtonManager::SelectRandomCriteria()
{
	FString randomCriteria;

	
	randomCriteria = criterion[RandomPrice(0, criterion)];

	return randomCriteria;
}