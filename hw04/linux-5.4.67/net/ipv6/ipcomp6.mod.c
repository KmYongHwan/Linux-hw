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
	{ 0x7cc75a27, "xfrm6_find_1stfragopt" },
	{ 0x6010a3fe, "ipcomp_output" },
	{ 0x587a58c9, "ipcomp_input" },
	{ 0xcbe4c395, "ipcomp_destroy" },
	{ 0xeb939f88, "xfrm6_rcv" },
	{ 0x3cafccfc, "xfrm6_protocol_deregister" },
	{ 0xf4ab071, "xfrm_unregister_type" },
	{ 0x59ee4286, "xfrm6_protocol_register" },
	{ 0xc5850110, "printk" },
	{ 0xdded2805, "xfrm_register_type" },
	{ 0xf235770d, "ip6_redirect" },
	{ 0x56e1768c, "ip6_update_pmtu" },
	{ 0x6fc9ef9a, "make_kuid" },
	{ 0xfe90659f, "__xfrm_state_destroy" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x7c25f4b3, "xfrm_state_insert" },
	{ 0x2ffb1308, "xfrm_init_state" },
	{ 0xcd4d52d0, "xfrm6_tunnel_alloc_spi" },
	{ 0x75612a4e, "xfrm_state_alloc" },
	{ 0x8e377f9e, "xfrm_state_lookup" },
	{ 0x96a2c23b, "xfrm6_tunnel_spi_lookup" },
	{ 0xc0c7aa0d, "ipcomp_init_state" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "xfrm_ipcomp,xfrm6_tunnel");


MODULE_INFO(srcversion, "3FD06C69DE229434461DF73");
