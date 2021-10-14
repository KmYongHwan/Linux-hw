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
	{ 0x5c6db02d, "sock_diag_unregister" },
	{ 0x9acc3fe7, "sock_diag_register" },
	{ 0x60388684, "tipc_sk_fill_sock_diag" },
	{ 0xf7a7b291, "__nlmsg_put" },
	{ 0xfc2b0861, "__netlink_dump_start" },
	{ 0x3a3e2efa, "tipc_dump_done" },
	{ 0xcfe230ae, "tipc_dump_start" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x33713d5b, "sock_diag_save_cookie" },
	{ 0x19490a8c, "tipc_nl_sk_walk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "tipc");


MODULE_INFO(srcversion, "C96A97727349ED9FD4BA31A");
