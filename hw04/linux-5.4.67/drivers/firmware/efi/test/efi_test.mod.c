#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(.gnu.linkonce.this_module) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x7459220b, "module_layout" },
	{ 0xc373a5d1, "no_llseek" },
	{ 0x343f1816, "misc_deregister" },
	{ 0xc5850110, "printk" },
	{ 0x47fda759, "misc_register" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x37a0cba, "kfree" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xc3aaf0a9, "__put_user_1" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xb8e7ce2c, "__put_user_8" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xa0f493d9, "efi" },
	{ 0x8f9c199c, "__get_user_2" },
	{ 0xba312d7b, "current_task" },
	{ 0x6d334118, "__get_user_8" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xc6cbbc89, "capable" },
	{ 0xda872864, "security_locked_down" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "10FE07D77F2E82B33C7B9F8");
