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
	{ 0xbf331bdc, "nf_unregister_net_hook" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x688bd4df, "netlink_kernel_release" },
	{ 0x8c45fe25, "nf_register_net_hook" },
	{ 0xc5850110, "printk" },
	{ 0xa469a2d, "__netlink_kernel_create" },
	{ 0x3785c132, "init_net" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0x66593e48, "netlink_broadcast" },
	{ 0x69acdf38, "memcpy" },
	{ 0xf7a7b291, "__nlmsg_put" },
	{ 0xfc2d702f, "__alloc_skb" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x876027a, "netlink_ack" },
	{ 0x89462ec1, "netlink_capable" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "845D14D18B308CCE32AB266");
