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
	{ 0x53b954a2, "up_read" },
	{ 0x3de9cae1, "crypto_remove_final" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0x80f91735, "crypto_mod_put" },
	{ 0x5bd0748f, "crypto_del_default_rng" },
	{ 0x9f5a66d1, "crypto_remove_spawns" },
	{ 0x457594fa, "crypto_alg_list" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xdd64e639, "strscpy" },
	{ 0x25b3797e, "skb_trim" },
	{ 0x668b19a1, "down_read" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x393fbbc5, "crypto_mod_get" },
	{ 0x776fe93b, "unregister_pernet_subsys" },
	{ 0xc5850110, "printk" },
	{ 0x688bd4df, "netlink_kernel_release" },
	{ 0x623c7de8, "crypto_unregister_instance" },
	{ 0x7637553c, "netlink_rcv_skb" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x53825c19, "netlink_unicast" },
	{ 0xce807a25, "up_write" },
	{ 0x57bc19d2, "down_write" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x89462ec1, "netlink_capable" },
	{ 0xfc2d702f, "__alloc_skb" },
	{ 0xa916b694, "strnlen" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x6b542969, "register_pernet_subsys" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xa469a2d, "__netlink_kernel_create" },
	{ 0xf5893d49, "crypto_alg_mod_lookup" },
	{ 0x35d3dc46, "crypto_alg_sem" },
	{ 0xf7a7b291, "__nlmsg_put" },
	{ 0xfc2b0861, "__netlink_dump_start" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "C9AFA2BCACE3C975E16B93C");
