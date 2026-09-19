param(
    [string][Parameter(Mandatory=$true)]$executable,
    [string][Parameter(Mandatory=$true)]$testsFolder
)

$inputs = Get-ChildItem -Path $testsFolder -Filter "in_*.txt";

foreach ($input in $inputs) {
    $output = $input.FullName -replace "in_","out_";
    ./run-single-test.ps1 -executable $executable -inputFile $input -outputFile $output;
    $out_ref = $input.FullName -replace "in_","out_ref_";
    if(((Get-Content -Raw $output) -replace "`r","") -eq (Get-Content -Raw $out_ref))
    {
        Write-Host "Passed";
    }
    else
    {
        Write-Host "NOT Passed";
    }
}