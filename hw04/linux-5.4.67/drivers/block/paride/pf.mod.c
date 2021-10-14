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
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0xd727ef13, "param_ops_charp" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0xaad49c42, "param_array_ops" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xb29b06fc, "del_gendisk" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0x3e0bc3d7, "device_add_disk" },
	{ 0x71a50dbc, "register_blkdev" },
	{ 0xb21ba07d, "pi_unregister_driver" },
	{ 0x8b378436, "blk_mq_free_tag_set" },
	{ 0x481712b, "blk_cleanup_queue" },
	{ 0x7881831c, "pi_release" },
	{ 0x8713625d, "pi_init" },
	{ 0x4267110a, "pi_register_driver" },
	{ 0xe914e41e, "strcpy" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x44566abf, "blk_queue_bounce_limit" },
	{ 0xafdc8cfe, "blk_queue_max_segments" },
	{ 0x16933923, "put_disk" },
	{ 0xd39f24b1, "blk_mq_init_sq_queue" },
	{ 0x5495a1b7, "__alloc_disk_node" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2b79cdc1, "blk_mq_start_request" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x90012a9b, "pi_do_claimed" },
	{ 0xcbb3a9c, "__blk_mq_end_request" },
	{ 0x42d53c6a, "blk_update_request" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xc4b6cef0, "pi_read_block" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9ee6f33b, "pi_disconnect" },
	{ 0x21e1aa76, "pi_write_block" },
	{ 0xc10130bd, "pi_write_regr" },
	{ 0x66429791, "pi_connect" },
	{ 0xc5850110, "printk" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x158662ff, "pi_read_regr" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "paride");


MODULE_INFO(srcversion, "E9B87088186F97AF33BBE15");
