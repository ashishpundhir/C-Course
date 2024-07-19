use illuminative\http\request;

class SessionController exteds SessionController



{
    public function getSessionData(Request $request)
    {
        echo $request->session()->get('name');
        echo session('name');
    }
}

public function storeSessionData(Request $request){
    $request->session()->put('name',lpu);
    echo"data has been store";
}


public function deleteSessionData(Request $request)
{
    $request -> session()->flush(); 
    //coment this and try|| 
    $request -> forget ('name');
    // then comment this and check
    


    echo "Data has beeen removed"
}


//Route


Route::get('/session/get', [sessioncontroller::class,'getSesiondata']);
Route::get('/session/set', [sessioncontroller::class,'setSesiondata']);
route::get('/session/delete'[sessionController::class,'deleteSessionData']);