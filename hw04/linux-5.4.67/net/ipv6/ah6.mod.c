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
	{ 0xeb939f88, "xfrm6_rcv" },
	{ 0x3cafccfc, "xfrm6_protocol_deregister" },
	{ 0xf4ab071, "xfrm_unregister_type" },
	{ 0x59ee4286, "xfrm6_protocol_register" },
	{ 0xdded2805, "xfrm_register_type" },
	{ 0xcc032573, "xfrm_input_resume" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x7fc80ca5, "__pskb_pull_tail" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x5a44f8cb, "__crypto_memneq" },
	{ 0x5d3ce2e, "crypto_ahash_digest" },
	{ 0xbbe433c8, "skb_to_sgvec_nomark" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x32558580, "pskb_expand_head" },
	{ 0xfb578fc5, "memset" },
	{ 0x4d1a1157, "skb_push" },
	{ 0x34c21374, "skb_cow_data" },
	{ 0xf235770d, "ip6_redirect" },
	{ 0xfe90659f, "__xfrm_state_destroy" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x56e1768c, "ip6_update_pmtu" },
	{ 0x6fc9ef9a, "make_kuid" },
	{ 0x8e377f9e, "xfrm_state_lookup" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xb0e602eb, "memmove" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xc5850110, "printk" },
	{ 0x37a02412, "xfrm_aalg_get_byname" },
	{ 0x7e8685, "crypto_ahash_setkey" },
	{ 0x9bc39af7, "crypto_alloc_ahash" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x8f673234, "crypto_destroy_tfm" },
	{ 0xdb57498d, "xfrm_output_resume" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "xfrm_algo");


MODULE_INFO(srcversion, "D80D1208B8E6DF0D9D97D77");
