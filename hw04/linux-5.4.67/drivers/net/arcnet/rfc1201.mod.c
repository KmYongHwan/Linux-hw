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
	{ 0xd00304b0, "arcnet_unregister_proto" },
	{ 0xac249f34, "arc_proto_map" },
	{ 0x67840f2e, "arc_bcast_proto" },
	{ 0xc8f6d114, "arc_proto_default" },
	{ 0xc5850110, "printk" },
	{ 0xf3744f5f, "netdev_info" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x23c20fb9, "netif_rx" },
	{ 0x9c160d9e, "skb_put" },
	{ 0xfc2d702f, "__alloc_skb" },
	{ 0x3513190d, "__dev_kfree_skb_irq" },
	{ 0xb18156be, "skb_pull" },
	{ 0xe5c0e769, "netdev_warn" },
	{ 0x6534792a, "arcnet_debug" },
	{ 0x4d1a1157, "skb_push" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "arcnet");


MODULE_INFO(srcversion, "1877350E7B07EE4DA17279E");
