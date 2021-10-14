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
	{ 0x299f1e84, "team_modeop_port_change_dev_addr" },
	{ 0x1f4e8d60, "team_modeop_port_enter" },
	{ 0xc9bb5d05, "team_mode_unregister" },
	{ 0xbd5b5199, "team_mode_register" },
	{ 0x7bc9e495, "netpoll_send_skb_on_dev" },
	{ 0x88c30f54, "__dev_kfree_skb_any" },
	{ 0x2d5f37, "dev_queue_xmit" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "team");


MODULE_INFO(srcversion, "02535850C90AB85F231A139");
