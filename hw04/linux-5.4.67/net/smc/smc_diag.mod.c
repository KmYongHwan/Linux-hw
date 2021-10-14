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
	{ 0x188ae4d9, "smc_proto6" },
	{ 0xc61d6b80, "smc_proto" },
	{ 0x32ae5741, "_raw_read_lock" },
	{ 0xd48a58f4, "sock_i_ino" },
	{ 0xcb48ab33, "from_kuid_munged" },
	{ 0xc010edb1, "sock_i_uid" },
	{ 0x25b3797e, "skb_trim" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x33713d5b, "sock_diag_save_cookie" },
	{ 0xf7a7b291, "__nlmsg_put" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xfc2b0861, "__netlink_dump_start" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "smc");


MODULE_INFO(srcversion, "87BD9A5BB12A255B36A9594");
