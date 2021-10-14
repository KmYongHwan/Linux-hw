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
	{ 0xcec6343e, "seq_read" },
	{ 0x830d73d4, "seq_lseek" },
	{ 0xc3b095e1, "debugfs_remove_recursive" },
	{ 0xc5850110, "printk" },
	{ 0xc8ec3594, "debugfs_create_file" },
	{ 0x179f97c3, "debugfs_create_dir" },
	{ 0xda226a4d, "l2tp_session_free" },
	{ 0xec0ddd7, "l2tp_session_get_nth" },
	{ 0xbf240586, "l2tp_tunnel_free" },
	{ 0x4fec341a, "l2tp_tunnel_get_nth" },
	{ 0x4167f609, "seq_release" },
	{ 0x9cb39373, "seq_puts" },
	{ 0xad10eb8, "_raw_read_unlock_bh" },
	{ 0x150e3657, "_raw_read_lock_bh" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xc4142837, "seq_printf" },
	{ 0x37a0cba, "kfree" },
	{ 0x5df081, "__put_net" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x79ff3bbe, "seq_open" },
	{ 0x386c179d, "get_net_ns_by_pid" },
	{ 0xba312d7b, "current_task" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "l2tp_core");


MODULE_INFO(srcversion, "0D249994897D4CD1857E1B3");
