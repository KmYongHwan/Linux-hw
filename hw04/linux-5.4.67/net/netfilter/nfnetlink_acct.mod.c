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
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0x754d539c, "strlen" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x25b3797e, "skb_trim" },
	{ 0xb55ff53b, "nfnetlink_subsys_unregister" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x776fe93b, "unregister_pernet_subsys" },
	{ 0xc5850110, "printk" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x5a921311, "strncmp" },
	{ 0x53825c19, "netlink_unicast" },
	{ 0xc6f3b3fc, "refcount_dec_if_one" },
	{ 0xf720a60b, "module_put" },
	{ 0xfc2d702f, "__alloc_skb" },
	{ 0x66593e48, "netlink_broadcast" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0x6b542969, "register_pernet_subsys" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x4257ee65, "nfnetlink_subsys_register" },
	{ 0x37a0cba, "kfree" },
	{ 0x6b640864, "nla_strlcpy" },
	{ 0x6f18b0e3, "nla_put_64bit" },
	{ 0xf7a7b291, "__nlmsg_put" },
	{ 0x47a8c8a0, "try_module_get" },
	{ 0xfc2b0861, "__netlink_dump_start" },
};

MODULE_INFO(depends, "nfnetlink");


MODULE_INFO(srcversion, "C38EEB634016DCC446DE405");
