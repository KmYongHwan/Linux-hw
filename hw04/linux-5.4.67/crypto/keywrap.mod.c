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
	{ 0xd432c573, "crypto_unregister_template" },
	{ 0x21c22cea, "crypto_register_template" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x221eab6d, "scatterwalk_copychunks" },
	{ 0x87b8798d, "sg_next" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe9c8444e, "skcipher_register_instance" },
	{ 0x80f91735, "crypto_mod_put" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x53891b7c, "skcipher_alloc_instance_simple" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "D09429E0893F5CDC1E11059");
