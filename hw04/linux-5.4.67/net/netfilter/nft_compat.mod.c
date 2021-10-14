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
	{ 0xb55ff53b, "nfnetlink_subsys_unregister" },
	{ 0x47c27c2c, "nft_unregister_expr" },
	{ 0x4257ee65, "nfnetlink_subsys_register" },
	{ 0x5407d6bf, "nft_register_expr" },
	{ 0xc5850110, "printk" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0x25b3797e, "skb_trim" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x53825c19, "netlink_unicast" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x754d539c, "strlen" },
	{ 0xf7a7b291, "__nlmsg_put" },
	{ 0xfc2d702f, "__alloc_skb" },
	{ 0xddf68fc6, "xt_find_revision" },
	{ 0x47a8c8a0, "try_module_get" },
	{ 0x8e281574, "nla_reserve" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xdfde7559, "xt_check_match" },
	{ 0x52c6397f, "xt_check_target" },
	{ 0xfb578fc5, "memset" },
	{ 0x69acdf38, "memcpy" },
	{ 0xf11debf1, "xt_request_find_match" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x13665982, "xt_request_find_target" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x37a0cba, "kfree" },
	{ 0xf720a60b, "module_put" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nfnetlink,nf_tables,x_tables");


MODULE_INFO(srcversion, "C6E66408D0A1E3A595A4E7B");
