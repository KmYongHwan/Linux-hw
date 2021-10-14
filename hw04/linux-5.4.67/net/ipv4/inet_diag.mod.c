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
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x840bfa23, "sock_diag_put_meminfo" },
	{ 0x754d539c, "strlen" },
	{ 0xcb48ab33, "from_kuid_munged" },
	{ 0x5c6db02d, "sock_diag_unregister" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xd48a58f4, "sock_i_ino" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x25b3797e, "skb_trim" },
	{ 0x9acc3fe7, "sock_diag_register" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xcd279169, "nla_find" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x53825c19, "netlink_unicast" },
	{ 0x9ed8133a, "nla_reserve_64bit" },
	{ 0xf665f74f, "sock_load_diag_module" },
	{ 0xfc2d702f, "__alloc_skb" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x71ef7e44, "sock_diag_unregister_inet_compat" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xb0a7d541, "inet6_lookup" },
	{ 0x3cf50cde, "sock_gen_put" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0xf575047e, "sock_diag_check_cookie" },
	{ 0x33713d5b, "sock_diag_save_cookie" },
	{ 0x92f63ade, "__inet_lookup_listener" },
	{ 0xac60f1b6, "sock_diag_register_inet_compat" },
	{ 0xf7a7b291, "__nlmsg_put" },
	{ 0xc010edb1, "sock_i_uid" },
	{ 0xfc2b0861, "__netlink_dump_start" },
	{ 0x24539092, "netlink_net_capable" },
	{ 0x91cc9d2a, "__inet_lookup_established" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "19CBFA2AB1E9AA24AAC507C");
