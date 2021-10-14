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
	{ 0xb3b84165, "eth_mac_addr" },
	{ 0x337f2432, "l2tp_nl_unregister_ops" },
	{ 0xc5850110, "printk" },
	{ 0xead0511, "l2tp_nl_register_ops" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x27c0c667, "l2tp_session_delete" },
	{ 0xa80ea35, "free_netdev" },
	{ 0x37a0cba, "kfree" },
	{ 0x9415ca79, "__module_get" },
	{ 0xda226a4d, "l2tp_session_free" },
	{ 0x5792f848, "strlcpy" },
	{ 0xea4c5e82, "register_netdevice" },
	{ 0x44a9c6c5, "l2tp_session_register" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x66e9f04d, "release_sock" },
	{ 0x1ad3046b, "kernel_sock_ip_overhead" },
	{ 0x9d781b9c, "lock_sock_nested" },
	{ 0x6fe86ad9, "alloc_netdev_mqs" },
	{ 0x507e5784, "l2tp_session_create" },
	{ 0x754d539c, "strlen" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x31745b26, "__skb_ext_del" },
	{ 0x7fc80ca5, "__pskb_pull_tail" },
	{ 0xa8b80792, "dst_release" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0x698c507b, "dev_forward_skb" },
	{ 0xae1a0412, "l2tp_xmit_skb" },
	{ 0xf720a60b, "module_put" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x5f80123f, "unregister_netdevice_queue" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xbc0907b0, "ether_setup" },
	{ 0xc4142837, "seq_printf" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "l2tp_netlink,l2tp_core");


MODULE_INFO(srcversion, "52DA3923CA63FF798CEC380");
