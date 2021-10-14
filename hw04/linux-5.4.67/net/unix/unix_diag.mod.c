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
	{ 0x1d77b0f8, "unix_socket_table" },
	{ 0xad0f2b6c, "unix_table_lock" },
	{ 0x840bfa23, "sock_diag_put_meminfo" },
	{ 0xcb48ab33, "from_kuid_munged" },
	{ 0x5c6db02d, "sock_diag_unregister" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xd48a58f4, "sock_i_ino" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x25b3797e, "skb_trim" },
	{ 0x9acc3fe7, "sock_diag_register" },
	{ 0x839e2ef7, "nla_put" },
	{ 0xbf67a474, "unix_peer_get" },
	{ 0xc6eb389b, "sk_free" },
	{ 0x53825c19, "netlink_unicast" },
	{ 0xfc2d702f, "__alloc_skb" },
	{ 0xf13e594f, "unix_inq_len" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xf575047e, "sock_diag_check_cookie" },
	{ 0x22f443f, "unix_outq_len" },
	{ 0x33713d5b, "sock_diag_save_cookie" },
	{ 0x8e281574, "nla_reserve" },
	{ 0xf7a7b291, "__nlmsg_put" },
	{ 0xc010edb1, "sock_i_uid" },
	{ 0xfc2b0861, "__netlink_dump_start" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "2F3B627F3E6AEC1D71F9A2D");
