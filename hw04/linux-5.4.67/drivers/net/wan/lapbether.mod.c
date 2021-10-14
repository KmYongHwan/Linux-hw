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
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x12bc2eb, "dev_remove_pack" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x6b95e068, "dev_add_pack" },
	{ 0x7fc80ca5, "__pskb_pull_tail" },
	{ 0x15314fce, "consume_skb" },
	{ 0x17fc86f3, "skb_clone" },
	{ 0x74819a8, "lapb_data_received" },
	{ 0x25b3797e, "skb_trim" },
	{ 0x32558580, "pskb_expand_head" },
	{ 0xa80ea35, "free_netdev" },
	{ 0x56470118, "__warn_printk" },
	{ 0xf04187ce, "dev_close" },
	{ 0x5f80123f, "unregister_netdevice_queue" },
	{ 0xea4c5e82, "register_netdevice" },
	{ 0x6fe86ad9, "alloc_netdev_mqs" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x3785c132, "init_net" },
	{ 0x23c20fb9, "netif_rx" },
	{ 0x9c160d9e, "skb_put" },
	{ 0xd5209ccf, "__netdev_alloc_skb" },
	{ 0x2d5f37, "dev_queue_xmit" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4d1a1157, "skb_push" },
	{ 0x7ae4cc3b, "lapb_register" },
	{ 0x2935858f, "lapb_unregister" },
	{ 0xc5850110, "printk" },
	{ 0x1a1f3af0, "lapb_connect_request" },
	{ 0x66d5b76f, "lapb_disconnect_request" },
	{ 0x9ba6def2, "lapb_data_request" },
	{ 0xb18156be, "skb_pull" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "lapb");


MODULE_INFO(srcversion, "D0AABCB885DFD022E36D4E4");
