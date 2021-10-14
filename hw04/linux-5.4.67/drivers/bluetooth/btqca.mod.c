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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x7459220b, "module_layout" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf7e2d4ee, "__hci_cmd_sync" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xfbd10329, "hci_recv_frame" },
	{ 0x2895148f, "__hci_cmd_sync_ev" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0x718b8b7, "bt_info" },
	{ 0x3751a1b8, "__hci_cmd_send" },
	{ 0xfc2d702f, "__alloc_skb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x69acdf38, "memcpy" },
	{ 0x71deb539, "request_firmware" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x9c160d9e, "skb_put" },
	{ 0xede283d, "release_firmware" },
};

MODULE_INFO(depends, "bluetooth");


MODULE_INFO(srcversion, "1C418AA36E98C793A6255F5");
