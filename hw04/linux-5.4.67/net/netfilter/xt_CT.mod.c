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
	{ 0xb398858, "xt_unregister_targets" },
	{ 0x1295e8d6, "xt_unregister_target" },
	{ 0x1b0c3141, "xt_register_targets" },
	{ 0xc29215c9, "xt_register_target" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xc4551ceb, "nf_ct_set_timeout" },
	{ 0xabc8c0fc, "nf_ct_l4proto_find" },
	{ 0x15e1426f, "nf_ct_helper_ext_add" },
	{ 0x627747cc, "nf_conntrack_helper_try_module_get" },
	{ 0xa916b694, "strnlen" },
	{ 0x561f2fa3, "nf_ct_ext_add" },
	{ 0xc5e12505, "nf_ct_tmpl_free" },
	{ 0x54fcfcf0, "nf_ct_tmpl_alloc" },
	{ 0xe85e7763, "nf_ct_netns_get" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0x7ef43903, "nf_ct_destroy_timeout" },
	{ 0xa615716f, "nf_ct_netns_put" },
	{ 0xe7c8b3fc, "nf_conntrack_helper_put" },
	{ 0xc5850110, "printk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "x_tables,nf_conntrack");


MODULE_INFO(srcversion, "7D4AFAF6904113AA04ED85D");
