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
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0xa7d5f92e, "ida_destroy" },
	{ 0xe00365c5, "uart_unregister_driver" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0x9f6dd27d, "uart_register_driver" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xc222c8b, "uart_update_timeout" },
	{ 0x3c2271c8, "uart_get_baud_rate" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x817c6e33, "uart_suspend_port" },
	{ 0x37a0cba, "kfree" },
	{ 0xf84fbc19, "uart_resume_port" },
	{ 0x6d2e408f, "irq_get_irq_data" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x7021fe18, "dma_direct_unmap_sg" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x3ecb7f7, "dma_direct_map_sg" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x177803b5, "dma_request_slave_channel" },
	{ 0xf83f5db9, "uart_get_rs485_mode" },
	{ 0x238695d4, "uart_add_one_port" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0xb1fa0e0e, "devm_clk_get" },
	{ 0xfd6e5b19, "platform_get_irq" },
	{ 0x553e7cde, "devm_ioremap_resource" },
	{ 0xa943b224, "platform_get_resource" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xffb7c514, "ida_free" },
	{ 0x318de333, "dma_release_channel" },
	{ 0xb90692f4, "uart_remove_one_port" },
	{ 0x815588a6, "clk_enable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x20c2a63a, "tty_insert_flip_string_fixed_flag" },
	{ 0x5386438a, "dma_direct_sync_sg_for_cpu" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xb5bc8db9, "dma_direct_sync_sg_for_device" },
	{ 0xa637b975, "dma_ops" },
	{ 0xd9778c14, "uart_write_wakeup" },
	{ 0x7491954, "__tty_insert_flip_char" },
	{ 0x39b82a06, "tty_flip_buffer_push" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x24d273d1, "add_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xe419bc99, "iowrite32be" },
	{ 0xfdb9b629, "ioread32be" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cfsl,vf610-lpuart");
MODULE_ALIAS("of:N*T*Cfsl,vf610-lpuartC*");
MODULE_ALIAS("of:N*T*Cfsl,ls1021a-lpuart");
MODULE_ALIAS("of:N*T*Cfsl,ls1021a-lpuartC*");
MODULE_ALIAS("of:N*T*Cfsl,imx7ulp-lpuart");
MODULE_ALIAS("of:N*T*Cfsl,imx7ulp-lpuartC*");
MODULE_ALIAS("of:N*T*Cfsl,imx8qxp-lpuart");
MODULE_ALIAS("of:N*T*Cfsl,imx8qxp-lpuartC*");

MODULE_INFO(srcversion, "3F89496433BC0B1C5DB74CA");
