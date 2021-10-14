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
	{ 0x16830968, "xfrm_unregister_km" },
	{ 0x776fe93b, "unregister_pernet_subsys" },
	{ 0x97c5b84b, "xfrm_register_km" },
	{ 0x6b542969, "register_pernet_subsys" },
	{ 0xbe2f913d, "xfrm_state_add" },
	{ 0xf85bbb24, "xfrm_audit_state_add" },
	{ 0x9213a495, "xfrm_state_update" },
	{ 0x59dbbbdb, "xfrm_dev_state_add" },
	{ 0x57cd1e4b, "xfrm_init_replay" },
	{ 0x27866435, "security_xfrm_state_alloc" },
	{ 0x1ca32c18, "__xfrm_init_state" },
	{ 0xaab23340, "xfrm_calg_get_byname" },
	{ 0xd6f50cf7, "xfrm_ealg_get_byname" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x37a02412, "xfrm_aalg_get_byname" },
	{ 0xe914e41e, "strcpy" },
	{ 0x49ca83, "xfrm_aead_get_byname" },
	{ 0x5265fb0c, "xfrm_alloc_spi" },
	{ 0x395478eb, "xfrm_find_acq" },
	{ 0x9a668d01, "xfrm_find_acq_byseq" },
	{ 0xfeb5d0aa, "verify_spi_info" },
	{ 0xdca5c62c, "xfrm_state_delete" },
	{ 0xc599a772, "security_xfrm_state_delete" },
	{ 0x2577e11f, "xfrm_audit_state_delete" },
	{ 0x1099f2d8, "__xfrm_state_delete" },
	{ 0xcbac9e7d, "km_state_expired" },
	{ 0xfe90659f, "__xfrm_state_destroy" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xec36a606, "xfrm_audit_policy_delete" },
	{ 0xd903bee3, "xfrm_policy_delete" },
	{ 0x1a3211b, "xfrm_policy_byid" },
	{ 0x86dee3e7, "km_policy_expired" },
	{ 0x7e2c5b3b, "xfrm_policy_bysel_ctx" },
	{ 0x3b2ff4f3, "xfrm_state_free" },
	{ 0x9ca5be6d, "km_query" },
	{ 0x75612a4e, "xfrm_state_alloc" },
	{ 0xb01bebf9, "xfrm_get_acqseq" },
	{ 0x37a0cba, "kfree" },
	{ 0xa9c63b69, "security_xfrm_policy_free" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xac5137f0, "xfrm_audit_policy_add" },
	{ 0xa88dd0c, "xfrm_policy_insert" },
	{ 0xc65304b3, "security_xfrm_policy_alloc" },
	{ 0x6664c9a9, "xfrm_policy_destroy" },
	{ 0x10442970, "xfrm_sad_getinfo" },
	{ 0x53825c19, "netlink_unicast" },
	{ 0x39ef1c0, "xfrm_spd_getinfo" },
	{ 0x8e377f9e, "xfrm_state_lookup" },
	{ 0xaee119de, "xfrm_state_lookup_byaddr" },
	{ 0xc5850110, "printk" },
	{ 0x25b3797e, "skb_trim" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0x66593e48, "netlink_broadcast" },
	{ 0xf7a7b291, "__nlmsg_put" },
	{ 0xfc2d702f, "__alloc_skb" },
	{ 0x6589dc1e, "xfrm_state_walk" },
	{ 0x2782b393, "xfrm_state_walk_init" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xfc2b0861, "__netlink_dump_start" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0x24539092, "netlink_net_capable" },
	{ 0xba312d7b, "current_task" },
	{ 0x6f18b0e3, "nla_put_64bit" },
	{ 0x9166fada, "strncpy" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x665e746d, "xfrm_policy_alloc" },
	{ 0xa469a2d, "__netlink_kernel_create" },
	{ 0x7dcb3f61, "xfrm_state_walk_done" },
	{ 0xc9df055a, "xfrm_policy_walk_init" },
	{ 0xce4e8d44, "xfrm_policy_walk" },
	{ 0x100d32ca, "xfrm_policy_walk_done" },
	{ 0xbcc68724, "km_state_notify" },
	{ 0xfe2506f9, "xfrm_state_flush" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2fb34152, "km_policy_notify" },
	{ 0x568b7d11, "xfrm_policy_flush" },
	{ 0xe62bae83, "xfrm_policy_hash_rebuild" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x7637553c, "netlink_rcv_skb" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x688bd4df, "netlink_kernel_release" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x8e281574, "nla_reserve" },
	{ 0x69acdf38, "memcpy" },
	{ 0x1741fd40, "netlink_has_listeners" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "xfrm_algo");


MODULE_INFO(srcversion, "BD3CA9878E38E27E58D42D4");
