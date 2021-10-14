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
	{ 0x1757d1a4, "fou_encap_hlen" },
	{ 0xf13914b3, "gue_encap_hlen" },
	{ 0x23f695ba, "ip6_tnl_encap_del_ops" },
	{ 0xc5850110, "printk" },
	{ 0x101a4728, "ip6_tnl_encap_add_ops" },
	{ 0x7fc80ca5, "__pskb_pull_tail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x2ac88c91, "inet6_protos" },
	{ 0xb98fcc09, "__fou_build_header" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2b4a2850, "__gue_build_header" },
	{ 0x8fff4a84, "udp6_set_csum" },
	{ 0x4d1a1157, "skb_push" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "fou,ip6_tunnel");


MODULE_INFO(srcversion, "1854AD9F092406E24FD6E44");
