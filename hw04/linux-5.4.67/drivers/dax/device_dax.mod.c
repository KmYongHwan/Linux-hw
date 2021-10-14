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
	{ 0x136f06ee, "cdev_set_parent" },
	{ 0xc5399abe, "cdev_del" },
	{ 0x456ee827, "inode_dax" },
	{ 0x40748904, "cdev_init" },
	{ 0xf96c5767, "kill_dev_dax" },
	{ 0x565a7e01, "vmf_insert_pfn_pud" },
	{ 0x4514f29d, "vmf_insert_pfn_pmd" },
	{ 0x77358855, "iomem_resource" },
	{ 0x216e3eed, "vmf_insert_mixed" },
	{ 0x3f84bcd7, "dax_alive" },
	{ 0xd0db0f12, "run_dax" },
	{ 0x6b7e8664, "devm_memremap_pages" },
	{ 0xd84d35bd, "dax_read_lock" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x8ff7f2dd, "__dax_driver_register" },
	{ 0xc5034180, "noop_set_page_dirty" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xfce8f9db, "noop_invalidatepage" },
	{ 0xba312d7b, "current_task" },
	{ 0x5f6f1e9e, "dax_get_private" },
	{ 0x752832c, "noop_llseek" },
	{ 0x906ad463, "dax_inode" },
	{ 0xb0083d0a, "linear_hugepage_index" },
	{ 0x19d1aa1e, "cdev_add" },
	{ 0x8eee3399, "dax_read_unlock" },
	{ 0x3abeb957, "devm_add_action" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xfef6ccb5, "__devm_request_region" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x8b910be2, "errseq_sample" },
	{ 0xa2174e0a, "dax_driver_unregister" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "0B683564695A87C59D5AF87");
