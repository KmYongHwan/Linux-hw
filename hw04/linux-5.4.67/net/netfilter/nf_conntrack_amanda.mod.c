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
	{ 0x5465cea, "__nf_ct_refresh_acct" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xcc9a0d0e, "nf_ct_expect_init" },
	{ 0x7f628fd8, "textsearch_prepare" },
	{ 0x479f62f5, "nf_conntrack_helpers_register" },
	{ 0x16b4cab5, "skb_find_text" },
	{ 0xd727ef13, "param_ops_charp" },
	{ 0xc5850110, "printk" },
	{ 0xa03d3a7b, "nf_ct_expect_put" },
	{ 0xcb8d8014, "nf_ct_expect_alloc" },
	{ 0x9f38e93b, "nf_ct_expect_related_report" },
	{ 0xf9a1c955, "nf_conntrack_helpers_unregister" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x1685288e, "nf_ct_helper_log" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xe4dc74cf, "textsearch_destroy" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x442639ef, "param_ops_uint" },
	{ 0xae4bd1fb, "skb_copy_bits" },
};

MODULE_INFO(depends, "nf_conntrack");


MODULE_INFO(srcversion, "A89D4B0A487F3A07F03BA33");
