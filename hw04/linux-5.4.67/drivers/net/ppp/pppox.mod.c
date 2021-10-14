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
	{ 0x66e9f04d, "release_sock" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x8b255d77, "ppp_unregister_channel" },
	{ 0x9d781b9c, "lock_sock_nested" },
	{ 0xf720a60b, "module_put" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xbeeca5db, "sock_register" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0xad09e14f, "ppp_channel_index" },
	{ 0x47a8c8a0, "try_module_get" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "01B6ECBE6751CB63A1D543B");
