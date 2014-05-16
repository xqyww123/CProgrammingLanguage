function MoveFiles
{
foreach ($file in ([System.IO.Directory]::EnumerateFiles($PSScriptRoot)))
{
    if ([IO.Path]::GetExtension($file) -eq ".c")
    {
        $name = [IO.Path]::GetFileNameWithoutExtension($file)
        $tn = 0
        if (-not [Int]::TryParse([IO.Path]::GetFileNameWithoutExtension($file), ([ref]$tn))) { continue; }
        $todir = [IO.Path]::Combine($PSScriptRoot, $name)
        echo $todir
        if ([IO.Directory]::Exists($todir))
        {
            echo ("Error : Directory Exists : " + $todir)
            [IO.File]::Move($file, [IO.Path]::Combine($todir, $name))
        }
        else 
        {
            [IO.Directory]::CreateDirectory($todir)
            [IO.File]::Move($file, [IO.Path]::Combine($todir, $name+".c"))
        } 
    }
}
}

function CheckFiles
{
    foreach ($dir in ([System.IO.Directory]::EnumerateDirectories($PSScriptRoot)))
    {
        $name = [IO.Path]::GetFileName($dir)
        $num = 0
        if (-not [Int]::TryParse($name, ([ref]$num))) { continue }
        if (-not [IO.File]::Exists([IO.Path]::Combine($dir, $name+".c")))
        {
            echo ("Bar format : " + $name)
            foreach ($file in [IO.Directory]::EnumerateFiles())
        }
    }
}

CheckFiles