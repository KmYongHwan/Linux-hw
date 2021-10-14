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
	{ 0x7021fe18, "dma_direct_unmap_sg" },
	{ 0xf9a482f9, "msleep" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0x3eee3c2e, "memstick_alloc_host" },
	{ 0xa8ff0101, "memstick_free_host" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x3c10c460, "memstick_suspend_host" },
	{ 0xc9b3b641, "memstick_detect_change" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0x45a77022, "memstick_resume_host" },
	{ 0x22690c6a, "pci_release_regions" },
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x8db07afd, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x95d79dbf, "memstick_remove_host" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xba312d7b, "current_task" },
	{ 0x7896ccdc, "sg_miter_start" },
	{ 0xc5850110, "printk" },
	{ 0x1f1fe509, "kthread_stop" },
	{ 0xc773849f, "sg_miter_stop" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xde006432, "sg_miter_next" },
	{ 0x38a70269, "memstick_next_req" },
	{ 0xc1c110c9, "memstick_add_host" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc0af0f07, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x4d87e644, "pci_ioremap_bar" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x3ecb7f7, "dma_direct_map_sg" },
	{ 0xbaed66b, "pci_request_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0x29361773, "complete" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0xa637b975, "dma_ops" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "memstick");

MODULE_ALIAS("pci:v00001180d00000592sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "D5FA9E413F71E6988DB5176");
