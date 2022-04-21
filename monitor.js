const { watchFile } = require('fs')
const { execSync:exec } = require('child_process')
const l = console.log
const filename = process.argv[2]

// 检查编译环境
if(exec('g++ -v').toString().match(/未找到命令|command not found/g)){
	l('缺乏g++ 环境，请安装后再试')
	process.exit(0)
}


// 监视app.cpp文件，编译成app可执行文件，并执行文件
watchFile(filename+'.cpp',function(){
	try{
		exec(`g++ ${filename}.cpp -o ${filename}`)
		l(exec('./'+filename).toString())
	}catch(e){
		l(e)
	}
	
})
